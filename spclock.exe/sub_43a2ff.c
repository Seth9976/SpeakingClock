// 函数: sub_43a2ff
// 地址: 0x43a2ff
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 += 1
*arg1 += arg1.b
*arg1 += arg1:1.b
*arg1 |= arg1
*(arg3 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
*(arg3 - 0x18) = *arg2
void* edi_2 = arg3 - 0x14
void* esi_2 = &arg2[1]
*edi_2 = *esi_2
void* edi_3 = edi_2 + 4
void* esi_3 = esi_2 + 4
*edi_3 = *esi_3
*(edi_3 + 4) = *(esi_3 + 4)
*(arg3 - 8) = sub_4330b0(2, arg3 - 0x18, sub_42c73c(arg1), arg3 - 4, 0)
void* var_28_1 = arg3
int32_t (* var_2c_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HBRUSH hbr
void* ebp
hbr, ebp = sub_42bc04(*(arg1 + 0x14))
FillRect(*(ebp - 4), ebp - 0x18, hbr)
int32_t ecx
ecx.b = 0xff
sub_4331a8(*(ebp - 8), ebp - 0x18, ecx)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_43a38a
return sub_43313c(*(ebp - 8), 0xffffffff)
