// 函数: sub_4a1f64
// 地址: 0x4a1f64
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = *(*data_4ac0ac + 0x414)

if (ebx u< 1)
    return MessageBeep(MB_OK)

if (ebx - 1 u< 4)
    return sub_487de4(*(sub_4925ec(*(*data_4ac000 + 0x64)) + 0x50))

if (ebx == 5)
    return PlaySoundA(sub_405018(*data_4ac3ac), nullptr, 0x20001)

return ebx - 5
