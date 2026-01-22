// 函数: sub_470d20
// 地址: 0x470d20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0xa7] == 0)
    return sub_45ce7c(arg1, arg2)

if (*arg2 != 5)
    LRESULT eax_12 = DefFrameProcA(sub_45f888(arg1), arg1[0xa7], *arg2, arg2[1], arg2[2])
    arg2[3] = eax_12
    return eax_12

LRESULT eax_5 = DefWindowProcA(sub_45f888(arg1), *arg2, arg2[1], arg2[2])
arg2[3] = eax_5
return eax_5
