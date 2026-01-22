// 函数: sub_47b7f0
// 地址: 0x47b7f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
var_8:2.b = arg1.b
var_8:3.b = arg2
int32_t result = sub_459704(zx.d(var_8:2.b), arg3, arg4, arg5)

if (*(arg3 + 0x1a1) == 0)
    return result

*(arg3 + 0x1a1) = 0
int32_t eax_4

if (arg5 s< 0)
    eax_4 = 0
else if (arg5 s>= sub_45714c(arg3) || arg4 s< 0)
    eax_4 = 0
else if (arg4 s<= sub_457190(arg3))
    eax_4.b = 1
else
    eax_4 = 0

var_8:1.b = eax_4.b

if (arg3[0x66] == 0)
    *(arg3 + 0x1b2) = 0
    *(arg3 + 0x1b1) = 0
    
    if (var_8:1.b != 0 && *(arg3 + 0x1b2) - 2 u>= 2)
        (*(*arg3 + 0x80))()
else if (var_8:1.b == 0)
    if (arg3[0x68].b != 0)
        *(arg3 + 0x1b2) = 3
    
    (*(*arg3 + 0x84))()
else
    sub_47b9c0(arg3, arg3[0x68].b ^ 1)
    
    if (arg3[0x68].b != 0)
        (*(*arg3 + 0x84))()

if (var_8:1.b != 0)
    int32_t esi
    esi.w = 0xffeb
    sub_403e64(arg3, esi)

return sub_47b65c(arg3)
