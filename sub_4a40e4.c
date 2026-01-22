// 函数: sub_4a40e4
// 地址: 0x4a40e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
WAVEOUTCAPSA pwoc

if (waveOutGetDevCapsA(0xffffffff, &pwoc, 0x34) == 0 && (pwoc.dwSupport & 4) == 4)
    uint32_t pdwVolume
    result.b = waveOutGetVolume(0xffffffff, &pdwVolume) == 0
    *arg2 = zx.d(pdwVolume.w)
    *arg1 = zx.d((pdwVolume u>> 0x10).w)

return result
