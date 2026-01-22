// 函数: sub_4474ae
// 地址: 0x4474ae
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
esi.w = 0xffef
sub_403e64(*(arg1 - 0xc), esi)
int32_t eax_1
void* ebp
eax_1, ebp = sub_46ba88(*(arg1 - 0x10))
*(ebp - 0x18) = eax_1
*(ebp - 0x1c) = sub_46b8e0()
void* var_4 = ebp
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_446d98(0x446d84, 1, *(ebp - 0xc))

if (eax_3 != 0)
    eax_3 -= 0xffffffec

int32_t* eax_4 = *(ebp - 8)
(*(*eax_4 + 0x1c))(eax_4, eax_3, ebp - 0x20)
void* var_4_1 = ebp
int32_t (* var_8_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_7 = *(ebp - 8)
int32_t eax_9
eax_9.b = ((*(*eax_7 + 0xc))(eax_7, *(ebp - 0x10)) & 0x80000000) == 0
*(ebp - 0x11) = eax_9.b

if (*(ebp - 0x11) != 0)
    int32_t eax_11
    eax_11.b = ((*(**(ebp - 0xc) + 0x34))() & 0x80000000) == 0
    *(ebp - 0x11) = eax_11.b

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (* var_4_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, 
    int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_447560
int32_t eax_12 = *(ebp - 0x20)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = *(ebp - 8)
ExceptionList = ExceptionList_1
return ExceptionList_1->Next->__offset(0x20).d(ExceptionList, eax_12, var_4_2)
