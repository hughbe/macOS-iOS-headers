#!/usr/bin/env bash

dotnet run Generate
wget -r http://192.168.0.11:10000/tree/ -P Generate/ios_tree
rm -rf iOS
