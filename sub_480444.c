// 函数: sub_480444
// 地址: 0x480444
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_45fc28(arg1)

if (result == 0)
    return result

int32_t eax_3 = GetWindowLongA(sub_45f888(arg1), 0xfffffff0)
int32_t dwNewLong

if (arg3 != 0)
    dwNewLong = eax_3 | arg2
else
    dwNewLong = eax_3 & not.d(arg2)

return SetWindowLongA(sub_45f888(arg1), 0xfffffff0, dwNewLong)
