// 函数: sub_40e554
// 地址: 0x40e554
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_210 = ebx
int32_t esi
int32_t var_214 = esi
int32_t edi
int32_t var_218 = edi
int32_t var_20c = 0
void** esi_1 = arg2
int16_t ebx_1 = arg1
int32_t* var_21c = &var_4
int32_t (* var_220)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t edi_1 = ebx_1 & 0xfff

if (edi_1 u<= 0x14)
    sub_403a40(esi_1, (&data_41332c)[zx.d(edi_1)])
else if (ebx_1 == 0x100)
    sub_403a40(esi_1, "String")
else if (ebx_1 != 0x101)
    void var_8
    char eax_4
    eax_4, ebx_1, ebp_1, esi_1 = sub_40e9b0(ebx_1, &var_8)
    
    if (eax_4 == 0)
        sub_406c04(&ebp_1[-0x82], 4)
        sub_403cd4(esi_1, *data_413558, ebp_1[-0x82])
    else
        sub_402e28(*ebp_1[-1], &ebp_1[-0x81])
        sub_403c50(sub_40274c(0x7fffffff, 2, &ebp_1[-0x81], &ebp_1[-0x41]), &ebp_1[-0x41])
else
    sub_403a40(esi_1, 0x40e6a0)

if ((ebx_1:1.b & 0x20) != 0)
    sub_403cd4(esi_1, "Array ", *esi_1)

if ((ebx_1:1.b & 0x40) != 0)
    sub_403cd4(esi_1, sub_40e6b7+5, *esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_21c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40e681
sub_4039ec(&ebp_1[-0x82])
return &ebp_1[-0x82]
