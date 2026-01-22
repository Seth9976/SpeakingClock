// 函数: sub_457d44
// 地址: 0x457d44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx
void* result_1 = arg2
arg2.b = 1
int32_t* eax_1 = sub_46bf14(arg1)
HANDLE eax_2 = sub_45457c()

if (eax_2 != 0 && eax_1 != eax_2 && arg1 != eax_2 && *(eax_2 + 0x30) == 0)
    (*(*eax_2 + 0x78))(result_1)

void* result = result_1

if (*(result + 0xc) == 0)
    if (eax_1 != 0 && arg1 != eax_1)
        HANDLE esi
        esi.w = 0xffc9
        return sub_403e64(eax_1, esi, result_1)
    
    *(result_1 + 4)
    result = sub_458ac8(arg1, *(result_1 + 8))
    *(result_1 + 0xc) = 0

return result
