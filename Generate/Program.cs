using System;
using System.Diagnostics;
using System.IO;
using System.Linq;

namespace Generate
{
    public class Program
    {
        static void Main(string[] args)
        {
            // Dump macOS frameworks.
            if (!args.Contains("skip-mac"))
            {
                void DumpMac(string folderName)
                {
                    string FrameworksPath = $"/System/Library/{folderName}";
                    foreach (string file in Directory.EnumerateDirectories(FrameworksPath))
                    {
                        Dump($"../macOS/{folderName}", file);
                    }
                }

                DumpMac("Frameworks");
                DumpMac("PrivateFrameworks");
            }

            // Dump iOS frameworks.
            if (!args.Contains("skip-ios"))
            {
                void DumpIOS(string folderName)
                {
                    string FrameworksPath = $"/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/System/Library/{folderName}";
                    foreach (string file in Directory.EnumerateDirectories(FrameworksPath))
                    {
                        Dump($"../iOS/{folderName}", file);
                    }
                }
                DumpIOS("Frameworks");
                DumpIOS("PrivateFrameworks");
            }
        }

        private static void Dump(string destinationDirectory, string filePath)
        {
            string name = Path.GetFileName(filePath);
            Console.WriteLine($"Dumping {name}");

            string args = $"\"{filePath}\" -H -o \"{destinationDirectory}/{name}\"";
            Console.WriteLine($"Running class-dump {args}");
            Process process = Process.Start("class-dump", args);
            process.WaitForExit();
        }
    }
}
