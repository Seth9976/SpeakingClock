// 函数: sub_4587f0
// 地址: 0x4587f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_2c = *arg2
void var_28
void* edi = &var_28
void* esi_1 = &arg2[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t* edi_4 = arg1
int32_t* ebx = edi_4[0x25]

if (ebx != 0)
    void* esi_4
    esi_4.w = 0xffbd
    arg1 = sub_403e64(ebx, esi_4, 0, edi_4)

if (ebx == 0 || arg1.b != 0)
    arg1.b = 1
else
    arg1 = nullptr

if (arg1.b != 0)
    int32_t* eax_2 = sub_459c18(edi_4, &var_2c)
    int32_t* esi_5
    
    if (eax_2 == 0)
        esi_5.w = 0xffcc
        sub_403e64(edi_4, esi_5, eax_2, &var_2c)
    else
        int32_t var_30 = sub_457190(eax_2)
        void var_1c
        sub_418a64(sub_45714c(eax_2), 0, 0, &var_1c, var_30)
        esi_5.w = 0xffcc
        sub_403e64(edi_4, esi_5, eax_2, &var_1c)

return arg1
