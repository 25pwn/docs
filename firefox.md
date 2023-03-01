---
tags: browser
---
# Firefox

[Downloads](https://www.mozilla.org/en-US/firefox/all/)

[Nightly](https://wiki.mozilla.org/Nightly)

## GPU Acceleration

In `about:config`, set [`media.ffmpeg.vaapi.enabled` to `true`](https://bugzilla.mozilla.org/show_bug.cgi?id=1683808)

Set the [environment variable](https://github.com/25pwn/wiki/wiki/Environment-Variables(Linux)) [`MOZ_DISABLE_RDD_SANDBOX=1`](https://bugzilla.mozilla.org/show_bug.cgi?id=1751363)(Due to a bug in firefox 98+)

On flatpak, additionally install `org.freedesktop.Platform.ffmpeg-full` and set `LIBVA_DRIVER_NAME` using `flatpak override`.

## Extensions

[Enhancer for YouTube™](https://addons.mozilla.org/en-US/firefox/addon/enhancer-for-youtube/): A ton of useful tweaks for YouTube

[Return Youtube Dislike](https://addons.mozilla.org/en-US/firefox/addon/return-youtube-dislikes/)

[enhanced-h264ify](https://addons.mozilla.org/en-US/firefox/addon/enhanced-h264ify/): Options to block h264, vp8, vp9, av1 etc. on YouTube

[uBlock Origin](https://addons.mozilla.org/en-US/firefox/addon/ublock-origin/): Blocks unwanted traffic

[Firefox Multi-Account Containers](https://addons.mozilla.org/en-US/firefox/addon/multi-account-containers/): Create isolated containers within a profile

## See Also:
https://ffprofile.com/

## Bugs
- Clipboard
	
	[[Linux] Clipboard tracking bug](https://bugzilla.mozilla.org/show_bug.cgi?id=1743366)

	[copy from address bar in sway (wayland) doesn't work](https://bugzilla.mozilla.org/show_bug.cgi?id=1717305)

	[[Wayland] KDE clipboard failures](https://bugzilla.mozilla.org/show_bug.cgi?id=1752505)

	[firefox with wayland hangs on clipboard with mime-type TEXT](https://bugzilla.mozilla.org/show_bug.cgi?id=1731511)