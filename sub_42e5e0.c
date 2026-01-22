// 函数: sub_42e5e0
// 地址: 0x42e5e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg1[3]
char result = sub_403df4(esi, arg2)

if (result != 0)
    return result

sub_403c68(esi)
arg1[3] = 0
int32_t edx_1
edx_1.b = 1
void* eax_3
int32_t edx_2
eax_3, edx_2 = (*(arg2 + 0x48))()
arg1[3] = eax_3
*(eax_3 + 0x14) = arg1
edx_2.w = 0xfffd
*(eax_3 + 0x10) = sub_403e7c(arg1, edx_2)
*(eax_3 + 0x1c) = arg1
edx_2.w = 0xfffc
*(eax_3 + 0x18) = sub_403e7c(arg1, edx_2)
void* esi_1
esi_1.w = 0xfffd
return sub_403e64(arg1, esi_1, arg1)
