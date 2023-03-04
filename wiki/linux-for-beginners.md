---
tags: guide
---
# Getting started with linux
This guide will walk you through installing and using linux for the first time.

## Downloading the required resources
Download the following:
- [Rufus](https://rufus.ie/en/). I recommend downloading the portable version.
- linux distro image(ISO) of your choice. I recommend [Fedora KDE](https://spins.fedoraproject.org/kde/download/index.html).

## Flashing your USB drive

- Follow [this guide](https://ubuntu.com/tutorials/create-a-usb-stick-on-windows) to flash your USB drive using rufus. Substitute "Ubuntu ISO" for the ISO you chose, and use dd mode instead of ISO Hybrid mode.

## Getting Windows ready
- (If you've decided to install linux, optional if you're only trying linux out)Set aside some space for your linux install. Follow [this guide](https://wiki.gentoo.org/wiki/User:Sakaki/Sakaki's_EFI_Install_Guide/Preparing_Windows_for_Dual-Booting) to partition your drive.

- Make Windows [use UTC instead of Localtime](https://devblogs.microsoft.com/oldnewthing/20040902-00/?p=37983). Open the Command Prompt as Admininstrator, paste the following and hit enter: `reg add "HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\TimeZoneInformation" /v RealTimeIsUniversal /t REG_DWORD /d 1 /f`

- Disable [secure boot](https://www.rodsbooks.com/efi-bootloaders/secureboot.html) if neccesary.

## Booting linux
- During boot, select your USB drive/linux distro image instead of Windows.