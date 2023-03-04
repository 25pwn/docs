---
tags:
- browser
- mozilla
---
# Firefox

[Downloads](https://www.mozilla.org/en-US/firefox/all/)

[Nightly](https://wiki.mozilla.org/Nightly)

## Internals
### about pages
[about:about](about:about)

[about:addons](about:addons)

[about:config](about:config)

[about:downloads](about:downloads)

[about:logins](about:logins)

[about:memory](about:memory)

[about:performance](about:performance)

[about:plugins](about:plugins)

[about:policies](about:policies)

[about:preferences](about:preferences)

[about:processes](about:processes)

[about:profiles](about:profiles)

[about:profiling](about:profiling)

[about:protections](about:protections)

[about:support](about:support)

[about:unloads](about:unloads)

[about:url-classifier](about:url-classifier)


## GPU Acceleration
### VAAPI
In `about:config`, set [`media.ffmpeg.vaapi.enabled` to `true`](https://bugzilla.mozilla.org/show_bug.cgi?id=1683808)

On flatpak, additionally install `org.freedesktop.Platform.ffmpeg-full`.

### WebGPU
[Set `gfx.webrender.all` and `dom.webgpu.enabled` to `true`](https://github.com/gpuweb/gpuweb/wiki/Implementation-Status)

https://hacks.mozilla.org/2020/04/experimental-webgpu-in-firefox/

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