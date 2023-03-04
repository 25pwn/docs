---
tags:
- os/windows
- platform/windows
- os_kernel/nt
---
# Windows
## Installation
### Acquire the desired installation media
[Windows 10 Home/Pro](https://www.microsoft.com/en-us/software-download/windows10ISO)

[Windows 11 Home/Pro](https://www.microsoft.com/en-us/software-download/windows11)

[Windows 10/11 Enterprise Evaluation](https://www.microsoft.com/en-us/evalcenter/evaluate-windows-11-enterprise)

[Windows Development Environment(for VMs)](https://developer.microsoft.com/en-us/windows/downloads/virtual-machines/)

Tip: You can directly download the Windows 10 installation media from Microsoft on Windows by changing your browser agent to something other than Windows.

### Partitioning
You may do this with a different OS, [`diskpart`](https://docs.microsoft.com/en-us/windows-server/administration/windows-commands/diskpart) or `Windows Setup`.

Partitioning from `Windows Setup` will create a system reserved partition, and after partitioning and the cursor has returned from an hourglass to an arrow, close the dialog.

### [Apply the image using DISM](https://www.tenforums.com/tutorials/84331-apply-windows-image-using-dism-instead-clean-install.html)
Press `SHIFT+F10` when the `Windows Setup` window appears to open the Command Prompt.

Run `diskpart` and run `list vol` to view the list of volumes and partitions. Note the volumes you are installing from and to(later denoted as `SRC_VOL` and `DEST_VOL` respectively). To exit `diskpart`, run `exit` or press `CTRL+C`.

Run `dism /Get-WimInfo /WimFile:D:\Sources\install.${IMG_TYPE}`, where `IMG_TYPE` is `wim` or `esd`. This will return the list of images the installation media contains. Note the image type and Index of the image you want to apply(later denoted as `IMG_INDEX`).

Run `dism /Apply-Image /ImageFile:${SRC_VOL}:\Sources\install.${IMG_TYPE} /index:${IMG_INDEX} /ApplyDir:${DEST_VOL}:\` to apply the image.

### Install Windows Boot Manager
Run `${DEST_VOL}:\Windows\System32\bcdboot ${DEST_VOL}:\Windows /s ${EFI_VOL}:\ /addlast`.

### Exit the installer
Close the `Windows Setup` window and cancel the installation.

## Usage
### Tools
[Process Hacker](https://github.com/processhacker/processhacker): Superior alternative to Task Manager

[Windows Terminal](https://github.com/microsoft/terminal): Superior alternative to all of Windows' terminals

[Git for Windows](https://gitforwindows.org/): Provides a git client and bash shell

[7-zip](https://www.7-zip.org/): The best archive utility

[Firefox Nightly](https://www.mozilla.org/en-US/firefox/all/#product-desktop-nightly): Recommended browser

[Files](https://github.com/files-community/Files): a better file manager

[WinBtrfs](https://github.com/maharmstone/btrfs): BTRFS driver

[Quibble](https://github.com/maharmstone/quibble): Bootloader with BTRFS support

[OpenSSH Server](https://learn.microsoft.com/en-us/windows-server/administration/openssh/openssh_install_firstuse?tabs=powershell)
```
Add-WindowsCapability -Online -Name OpenSSH.Server
Start-Service sshd
Set-Service -Name sshd -StartupType 'Automatic'
```
[Chocolatey](https://docs.chocolatey.org/en-us/choco/setup): Package manager
```
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

### Settings

[Disable hibernation](https://docs.microsoft.com/en-us/troubleshoot/windows-client/deployment/disable-and-re-enable-hibernation): 
```
powercfg /h off
```

[OR](https://www.elevenforum.com/t/enable-or-disable-hibernate-in-windows-11.1894)
```
reg add "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Power" /V HibernateEnabledDefault /T REG_DWORD /d 0 /f
```

[Disable Fast Startup](https://www.tenforums.com/tutorials/4189-turn-off-fast-startup-windows-10-a.html#option2)
```
reg add "HKLM\SYSTEM\CurrentControlSet\Control\Session Manager\Power" /V HiberbootEnabled /T REG_DWORD /d 0 /f
```

[Use UTC instead of localtime](https://devblogs.microsoft.com/oldnewthing/20040902-00/?p=37983):
```
reg add "HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\TimeZoneInformation" /v RealTimeIsUniversal /t REG_DWORD /d 1 /f
```



## See Also:
[Windows PE](https://docs.microsoft.com/en-us/windows-hardware/manufacture/desktop/winpe-intro)

[ReactOS](https://reactos.org/)

Windows modern standby