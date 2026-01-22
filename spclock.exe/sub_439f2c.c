// 函数: sub_439f2c
// 地址: 0x439f2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
void* eax
int32_t ecx
int32_t edx
eax, ecx, edx = sub_4659bc()
char eax_1 = sub_465ac4(eax)
char eax_2

if (eax_1 != 0)
    eax_2, edx = sub_433cec(ecx)

uint32_t eax_4

if (eax_1 == 0 || eax_2 == 0 || (*(*(arg6 - 4) + 0x1c) & 0x10) != 0)
    eax_4 = nullptr
else
    eax_4.b = 1

if (eax_4.b != 0)
    edx.b = 1
    int32_t* eax_7 = sub_46bf14(*(arg6 - 4))
    
    if (eax_7 == 0)
        eax_4 = 0
    else if (sub_478924(sub_478638(eax_7)) == 0)
        eax_4 = 0
    else if (sub_47895c(sub_478638(eax_7), *(arg6 - 4)).b != 0)
        eax_4.b = 1
    else
        eax_4 = 0

if (eax_4.b == 0)
    return DrawTextA(arg3, sub_405018(arg2), arg1, arg5, arg4)

return sub_439e34(arg3, arg2, arg5, arg4, arg6)
