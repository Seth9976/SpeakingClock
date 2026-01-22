// 函数: sub_420ef8
// 地址: 0x420ef8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax_1
int32_t ecx
eax_1, ecx = sub_408f64(arg2, "False")

if (eax_1 != 0)
    return sub_4229ec(ecx, 8)

char eax_5
int32_t ecx_1
eax_5, ecx_1 = sub_408f64(arg2, "True")

if (eax_5 != 0)
    return sub_4229ec(ecx_1, 9)

char eax_9
int32_t ecx_2
eax_9, ecx_2 = sub_408f64(arg2, "Null")

if (eax_9 != 0)
    return sub_4229ec(ecx_2, 0)

char eax_12
int32_t ecx_3
eax_12, ecx_3 = sub_408f64(arg2, 0x420fb8)

if (eax_12 == 0)
    return sub_4227e8(arg1, arg2, sub_4229ec(ecx_3, 7))

return sub_4229ec(ecx_3, 0xd)
