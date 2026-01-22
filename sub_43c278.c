// 函数: sub_43c278
// 地址: 0x43c278
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t var_1c = *arg2
void var_18
void* edi_1 = &var_18
void* esi_2 = &arg2[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
WPARAM wParam
int32_t eax = sub_4330b0(2, &var_1c, arg1, &wParam, 0)
int32_t* var_28_1 = &var_4
int32_t (* var_2c_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
SendMessageA(*(*(arg3 - 4) + 0x288), 0x318, wParam, 4)
int32_t ecx
ecx.b = 0xff
sub_4331a8(eax, &var_1c, ecx)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_2)(int32_t* arg1 @ ebp, int32_t arg2) = sub_43c2f7
return sub_43313c(eax, 0xffffffff)
