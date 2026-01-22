// 函数: sub_406c58
// 地址: 0x406c58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi_1 = arg2
*arg1 = *esi_1
void* edi_1 = &arg1[1]
void* esi_2 = &esi_1[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
int32_t eax = *arg3

if (eax s> *arg2)
    *arg1 = eax

int32_t eax_1 = arg3[1]

if (eax_1 s> arg2[1])
    arg1[1] = eax_1

int32_t eax_2 = arg3[2]

if (eax_2 s< arg2[2])
    arg1[2] = eax_2

int32_t eax_3 = arg3[3]

if (eax_3 s< arg2[3])
    arg1[3] = eax_3

int32_t* result
result.b = sub_406cb8(arg1).b ^ 1

if (result.b == 0)
    sub_403578(arg1, 0x10, 0)

return result
