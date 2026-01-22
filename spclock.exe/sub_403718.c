// 函数: sub_403718
// 地址: 0x403718
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t count
count.b = arg3
int32_t ecx_1
int32_t edi_1
edi_1, ecx_1 = __builtin_memset(arg1, 0, count)
int32_t edi_2 = edi_1 - count
ecx_1.b = arg2
char result = rol.b(1, ecx_1.b)
char* ecx_2 = ecx_1 u>> 3

if (ecx_2 u< count)
    ecx_2[edi_2] |= result

return result
