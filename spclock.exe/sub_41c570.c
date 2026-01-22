// 函数: sub_41c570
// 地址: 0x41c570
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(*arg3 + 0x84))()

if (arg3[7] == arg3[8])
    sub_41c49c(arg3)

int32_t eax_3 = arg3[7]

if (arg2 s< eax_3)
    sub_4030d0(arg3[6] + (arg2 << 3), arg3[6] + (arg2 << 3) + 8, (eax_3 - arg2) * 8)

int32_t* eax_7 = arg3[6] + (arg2 << 3)
*eax_7 = 0
eax_7[1] = arg4
sub_404bdc(eax_7, arg1)
arg3[7] += 1
return (*(*arg3 + 0x80))()
