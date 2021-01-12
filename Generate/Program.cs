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
            void DumpMac(string folderName)
            {
                string desktopPath = Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory);
                string frameworksPath = $"{desktopPath}/Libraries/System/Library/{folderName}";
                int i = 0;
                string[] files = Directory.EnumerateDirectories(frameworksPath).OrderBy(s => s).ToArray();
                Console.WriteLine($"Dumping {folderName}");
                foreach (string file in files)
                {
                    i++;
                    Console.WriteLine($"{i}/{files.Length}");
                    string name = Path.GetFileNameWithoutExtension(file);
                    Dump($"../macOS/{folderName}", $"{file}/Versions/A/{name}");
                }
            }

            DumpMac("Frameworks");
            DumpMac("PrivateFrameworks");
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
