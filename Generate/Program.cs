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
                    int i = 0;
                    string[] files = Directory.EnumerateDirectories(FrameworksPath).OrderBy(s => s).ToArray();
                    foreach (string file in files)
                    {
                        i++;
                        Console.WriteLine($"{i}/{files.Length}");
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
                    string FrameworksPath = $"/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/{folderName}";
                    foreach (string file in Directory.EnumerateDirectories(FrameworksPath).OrderBy(s => s))
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
            string args = $"\"{filePath}\" -H -o \"{destinationDirectory}/{name}\"";
            Console.WriteLine($"Running class-dump {args}");
            Process process = Process.Start("class-dump", args);
            process.WaitForExit();
        }
    }
}
