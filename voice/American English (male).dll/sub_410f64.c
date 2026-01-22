// 函数: sub_410f64
// 地址: 0x410f64
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

(*(*arg3 + 0x84))()

if (arg3[5] == arg3[6])
    sub_410e90(arg3)

int32_t eax_3 = arg3[5]

if (arg2 s< eax_3)
    sub_4027b0(arg3[4] + (arg2 << 3), arg3[4] + (arg2 << 3) + 8, (eax_3 - arg2) << 3)

int32_t* eax_7 = arg3[4] + (arg2 << 3)
*eax_7 = 0
eax_7[1] = arg4
sub_403a40(eax_7, arg1)
arg3[5] += 1
return (*(*arg3 + 0x80))()
