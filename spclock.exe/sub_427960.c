// 函数: sub_427960
// 地址: 0x427960
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_1c = ebx
int32_t* var_8 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = arg3
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3
eax_1, ExceptionList_3 = (**arg4)(2, 0, ExceptionList, var_24, var_20)
ExceptionList_1 = ExceptionList_3
int32_t eax_3
int32_t ecx
int32_t edx_1
eax_3, ecx, edx_1 = sub_41c874(arg4)
int32_t var_18_1 = eax_1 - eax_3
ExceptionList_1 = sbb.d(ExceptionList_1, edx_1, eax_1 u< eax_3)
int32_t ecx_1 = sub_4052a8(&var_8, sub_405a74(ecx, ExceptionList_1, var_18_1, arg2, arg1))
int32_t* eax_7 = var_8

if (eax_7 != 0)
    eax_7 = *(eax_7 - 4)

if (eax_7 s<= 0)
    int32_t* eax_36 = var_8
    (*(*eax_36 + 4))(eax_36)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_427acb
    int32_t* eax_38 = &var_8
    sub_404b88(eax_38)
    return eax_38

int32_t* var_18_2

if (sub_403df4(arg4, &data_41806c) == 0)
    var_18_2 = sub_403c38(ecx_1, sub_417fa7+0x5a)
else
    var_18_2 = arg4

int32_t* var_c_1 = &var_4
int32_t (* __saved_edx_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (var_18_2 != arg4)
    int32_t eax_16
    int32_t edx_5
    eax_16, edx_5 = (**arg4)()
    int32_t eax_18
    int32_t ecx_2
    int32_t edx_6
    eax_18, ecx_2, edx_6 = sub_41c874(arg4)
    int32_t var_1c_3 = eax_16 - eax_18
    ebp_1 = sub_41cb10(sbb.d(edx_5, edx_6, eax_16 u< eax_18), arg4, ecx_2)
    sub_41c894(ebp_1[-5], 0, 0)

int32_t ebx_2 = (**ebp_1[-5])() - sub_41c874(ebp_1[-5])
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
int32_t __saved_edx_4
ExceptionList_2, __saved_edx_4 = sub_41c874(ebp_1[-5])
int32_t __saved_edx_2 = __saved_edx_4
ExceptionList_1 = ExceptionList_2
int32_t eax_29
int32_t edx_10
edx_10:eax_29 = sx.q(*(ebp_1[-5] + 4))
sub_422a24(eax_29 + ExceptionList_1, sub_405018(ebp_1[-1]), ebx_2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = &data_427a9c
int32_t eax_34 = ebp_1[2]

if (eax_34 == ebp_1[-5])
    return eax_34

return sub_403c68(ebp_1[-5])
