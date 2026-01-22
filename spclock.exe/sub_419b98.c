// 函数: sub_419b98
// 地址: 0x419b98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax
int32_t ecx
int32_t edx
eax, ecx, edx = sub_406b68()
int32_t* ebx = *(eax + 0xc)

if (ebx == 0)
    edx.b = 1
    ebx = sub_403c38(ecx, edx)
    *(sub_406b68() + 0xc) = ebx

int32_t ecx_1
int32_t edx_2
ecx_1, edx_2 = sub_419f9c(ebx, *(sub_406b68() + 8))
edx_2.b = 1
int32_t eax_7 = sub_403c38(ecx_1, edx_2)
void* result = sub_406b68()
*(result + 8) = eax_7
return result
