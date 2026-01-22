// 函数: sub_4a4138
// 地址: 0x4a4138
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
WAVEOUTCAPSA pwoc

if (waveOutGetDevCapsA(0xffffffff, &pwoc, 0x34) == 0 && (pwoc.dwSupport & 4) == 4)
    result.b = waveOutSetVolume(0xffffffff, arg2) == 0

return result
