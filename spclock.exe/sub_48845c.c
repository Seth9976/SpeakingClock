// 函数: sub_48845c
// 地址: 0x48845c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
int32_t i = arg3
int32_t var_1c = 0
int32_t eax_1 = sub_41c874(arg2)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_1 + 4)
sub_41c894(arg2, eax_4, edx)
int32_t var_10 = 0
int32_t var_14 = 0
int32_t* var_30_1 = &var_4
int32_t (* var_34_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t* eax_6 = sub_402ea8(0x800d)
char* eax_7 = sub_402ea8(0x800d)
int32_t eax_9

for (; i s> 0; i -= eax_9)
    eax_9 = (*(*arg1 + 0xc))()
    uint32_t eax_12 = zx.d(sub_490804(eax_6, eax_7, eax_9.w))
    (*(*arg2 + 0x10))()
    sub_41cad8(arg2, eax_7, eax_12)
    var_1c += eax_12 + 4

int32_t eax_18 = sub_41c874(arg2)
int32_t eax_20
int32_t edx_4
edx_4:eax_20 = sx.q(eax_1)
sub_41c894(arg2, eax_20, edx_4)
(*(*arg2 + 0x10))()
int32_t eax_24
int32_t edx_5
edx_5:eax_24 = sx.q(eax_18)
sub_41c894(arg2, eax_24, edx_5)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_48856d
sub_402ec4(eax_24)
return sub_402ec4(eax_7)
