// 函数: sub_48374c
// 地址: 0x48374c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
sub_483730(ecx, arg2)
LRESULT result = sub_45fc28(*(arg1 + 4))

if (result.b == 0)
    return result

result.b = *(arg1 + 8) == 0
return SendMessageA(sub_45f888(*(arg1 + 4)), 0x43a, result & 0x7f, arg2)
