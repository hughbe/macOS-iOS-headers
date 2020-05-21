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
            if (args.Contains("macos"))
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
            if (args.Contains("ios"))
            {
                // wget -r http://192.168.0.10:10000/tree/ with some changes
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
