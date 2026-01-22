// 函数: sub_43bc84
// 地址: 0x43bc84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT eax_2 = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x149, arg2, 0)

if (eax_2 == 0xffffffff || eax_2 s<= 0)
    return sub_4052a8(arg3, nullptr)

sub_4052a8(arg3, eax_2)
LPARAM lParam = sub_405018(*arg3)
return SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x148, arg2, lParam)
