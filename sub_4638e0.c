// 函数: sub_4638e0
// 地址: 0x4638e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edi = arg1
void* esi = *(edi + 0x14)

if ((*(esi + 0x1c) & 1) != 0 || *(edi + 0x64) == 0)
    return 

arg1 = sub_45e2d0(esi)

if (arg1 s<= 0 || *(edi + 0x38) != 0)
    return 

(*(**(edi + 0x14) + 0x44))()
(*(**(edi + 0x14) + 0x90))()
int32_t var_1c

if (arg2 == 0)
    arg1 = sub_408e34(&var_1c, edi + 0x1d, 0x10)

if (arg2 == 0 && arg1.b != 0)
    return 

void* var_20 = edi
*(edi + 0x1d) = var_1c
void* edi_2 = edi + 0x21
int32_t var_18
int32_t* esi_1 = &var_18
*edi_2 = *esi_1
void* edi_3 = edi_2 + 4
void* esi_2 = &esi_1[1]
*edi_3 = *esi_2
*(edi_3 + 4) = *(esi_2 + 4)
void* edi_6 = var_20
void* eax_4 = *(edi_6 + 0x64)
char edx_1 = *(eax_4 + 0x10)
int32_t var_14
int32_t var_10

if (edx_1 == 1)
    sub_4620c0(eax_4, var_14 - var_1c)
    *(edi_6 + 0x68) = var_10 - var_18
else if (edx_1 == 2)
    sub_4620c0(eax_4, var_10 - var_18)
    *(edi_6 + 0x68) = var_14 - var_1c

if (sub_45e23c(*(edi_6 + 0x14)) s<= 0)
    return 

sub_463dd0(edi_6, nullptr)

if (*(edi_6 + 0x6c) != 0)
    return 

var_20 = edi_6
void (__convention("regparm")* var_24_1)(void* arg1, void* arg2) = sub_463f50
sub_462454(edi_6, nullptr)
