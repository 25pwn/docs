---
tags: linux-distro immutable
---
# ChromeOS

Note: Chrome OS devices' keys between `ESC` and `LOCK` are just function keys with different legends.

## [Developer Mode](https://chromium.googlesource.com/chromiumos/docs/+/HEAD/developer_mode.md)

Developer Mode allows privleged code execution which is not permitted on stock Chrome OS. Enter Recovery Mode(`ESC+F2+POWER`) and press `CTRL+D` to enable Developer Mode(Note that this resets your state partition(your local data)). When booting, press `CTRL+D` to skip the 30-second timer. After booting, enter VT-2(`CTRL+ALT+F2`, `CTRL+ALT+F1` to exit). Initially, you can log in as `root` or `chronos`(initially with access to passwordless sudo) without any passwords. Run `chromeos-setdevpasswd`(note that `passwd` does not work) to set the password(and sudo password) for `chronos`(this will also disable logging in as root), which you can use in `crosh`(CTRL+ALT+T). To use bash inside `crosh`, run `shell`.

## Resetting the device

Create a recovery media in advance if this is the only device you have access to. During boot, press `SPACE` to disable Developer Mode, and then enter Recovery Mode and recover your device.

## Installing other Operating Systems

If you want to install to the internal drive, use `cgpt` to shrink the state partition, create partitions and create filesystems inside them. To boot other operating systems, run `crossystem dev_boot_altfw=1` as root. To boot from a USB device, also run `crossystem dev_boot_usb=1` as root. Depending on the device, you may have to flash your firmware using [MrChromebox's Firmware Utility](https://mrchromebox.tech/#fwscript). Be sure not to touch the partition table or Chrome OS partitions of the internal drive from ouside Chrome OS as that may render Chrome OS unbootable due to security checks; even with rootfs verification disabled.

# See Also:

[Workaround for battery discharge in dev-mode](https://dev.chromium.org/chromium-os/developer-information-for-chrome-os-devices/workaround-for-battery-discharge-in-dev-mode#TOC-Modify-the-recovery-image-so-we-can-mount-it)

[Shell scripts & noexec mounts](https://chromium.googlesource.com/chromiumos/docs/+/HEAD/security/noexec_shell_scripts.md)

[Dev-Install: Installing Developer and Test packages onto a Chrome OS device](https://chromium.org/chromium-os/how-tos-and-troubleshooting/install-software-on-base-images)

[Custom Firmware](https://chromium.org/chromium-os/developer-information-for-chrome-os-devices/custom-firmware)

[Disk Format](https://chromium.org/chromium-os/chromiumos-design-docs/disk-format)

[Developer Information for Chrome OS Devices](https://www.chromium.org/chromium-os/developer-information-for-chrome-os-devices/)

## Usage
### Crostini
[Crostini](https://chromeos.dev/en/linux/setup)

[Flatpak](https://flatpak.org/setup/Chrome%20OS/)

[Running Custom Containers Under ChromeOS](https://chromium.googlesource.com/chromiumos/docs/+/HEAD/containers_and_vms.md)

[Chrome OS devices/Crostini](https://wiki.archlinux.org/title/Chrome_OS_devices/Crostini)

[/r/Crostini Wiki](https://www.reddit.com/r/Crostini/wiki/index/)

## Docs
[ChromiumOS Developer Guide](https://chromium.googlesource.com/chromiumos/docs/+/HEAD/developer_guide.md)

## Virtualization of ChromeOS
[ChromeOS VM for Chromium developers](https://chromium.googlesource.com/chromiumos/docs/+/HEAD/cros_vm.md)

[Brunch](https://github.com/sebanc/brunch)

[Chromium Dash](https://chromiumdash.appspot.com/serving-builds?deviceCategory=ChromeOS): ChromeOS image downloads

[chromium_os-vm-vmware](https://github.com/FydeOS/chromium_os-vm-vmware)

[Building Chrome for ChromeOS (Simple Chrome)](https://chromium.googlesource.com/chromiumos/docs/+/HEAD/simple_chrome_workflow.md)

[Checking out and building Chromium on Linux](https://chromium.googlesource.com/chromium/src/+/HEAD/docs/linux/build_instructions.md)

Issues:
- [Booting ChromeOS Intel recovery images with Nvidia / AMD / Vmware graphics only (no i915)](https://github.com/sebanc/brunch/issues/303)
- [doesn't run with kvm](https://github.com/arnoldthebat/chromiumos/issues/317)
- [is there any way I could run this thing on VMware](https://github.com/sebanc/brunch/issues/578)

## etc
[Running virtual machines on your Chromebook](https://www.chromium.org/chromium-os/developer-information-for-chrome-os-devices/running-virtual-machines-on-your-chromebook/)

[FydeOS](https://github.com/FydeOS)

[FydeOS FAQ](https://github.com/FydeOS/fydeos.github.io)