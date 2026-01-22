// 函数: sub_43a308
// 地址: 0x43a308
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t var_1c = *arg2
void var_18
void* edi_1 = &var_18
void* esi_2 = &arg2[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
void var_8
int32_t var_c = sub_4330b0(2, &var_1c, sub_42c73c(arg1), &var_8, 0)
int32_t* var_2c_1 = &var_4
int32_t (* var_30_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HBRUSH hbr
void* ebp_1
hbr, ebp_1 = sub_42bc04(arg1[5])
FillRect(*(ebp_1 - 4), ebp_1 - 0x18, hbr)
int32_t ecx
ecx.b = 0xff
sub_4331a8(*(ebp_1 - 8), ebp_1 - 0x18, ecx)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_2c_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_43a38a
return sub_43313c(*(ebp_1 - 8), 0xffffffff)
