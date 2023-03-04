---
tags: browser
---
# Chrome
## Settings

`#setting` can be set from `chrome://flags`

`--setting` can be set from `~/.config/chrome-flags.conf` on Arch Linux; see [here](https://www.chromium.org/developers/how-tos/run-chromium-with-flags) for other platforms

### General

`#smooth-scrolling`: Disabled OR `--disable-smooth-scrolling`

`#enable-parallel-downloading`: Enabled

### Wayland

`#enable-webrtc-pipewire-capturer`: Enabled

### GPU Acceleration

`#ignore-gpu-blocklist`: Enabled OR `--ignore-gpu-blocklist`

`#enable-gpu-rasterization`: Enabled OR `--enable-gpu-rasterization`

`#enable-zero-copy`: Enabled OR `--enable-zero-copy`
               
`--disable-gpu-driver-workarounds`

`--enable-features=VaapiVideoDecoder`

## Extensions

[Enhancer for YouTube™](https://chrome.google.com/webstore/detail/enhancer-for-youtube/ponfpcnoihfmfllpaingbgckeeldkhle): A ton of useful tweaks for YouTube

[Return YouTube Dislike](https://chrome.google.com/webstore/detail/youtube-dislike-button/gebbhagfogifgggkldgodflihgfeippi/)

[enhanced-h264ify](https://chrome.google.com/webstore/detail/enhanced-h264ify/omkfmpieigblcllmkgbflkikinpkodlk): Options to block h264, vp8, vp9, av1 etc. on YouTube

[uBlock Origin](https://chrome.google.com/webstore/detail/ublock-origin/cjpalhdlnbpafiamejdnhcphjbkeiagm?hl=en): Blocks unwanted traffic

## etc

https://wiki.archlinux.org/title/Chromium

https://www.chromium.org/developers/how-tos/run-chromium-with-flags

https://chromium.googlesource.com/chromium/src/+/master/docs/gpu/vaapi.md#Verifying-VaAPI-installation-and-usage

https://chromium.googlesource.com/chromium/src/+/HEAD/docs/linux/hw_video_decode.md