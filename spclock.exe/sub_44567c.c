// 函数: sub_44567c
// 地址: 0x44567c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t eax
int32_t var_c = eax
HWND var_14 = sub_4783e0(*data_4ac2fc)
int32_t eax_4
void* ebp_1
eax_4, ebp_1 = sub_46ba88(0)
*(ebp_1 - 0x14) = eax_4
*(ebp_1 - 0x18) = sub_46b8e0()
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg3)
*(ebp_1 - 2) = temp0
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
data_4ab524 = *(ebp_1 - 8)
*(ebp_1 - 0xc) = arg2(arg1, ExceptionList, var_38, ebp_1, ExceptionList_1, var_2c, ebp_1)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4456f3
__fnclex()
int16_t x87control
int16_t x87status_2
x87control, x87status_2 = __fldcw_memmem16(*(ebp_1 - 2))
return 0
