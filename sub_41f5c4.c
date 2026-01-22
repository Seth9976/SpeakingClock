// 函数: sub_41f5c4
// 地址: 0x41f5c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_38 = ebx
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
void* var_34
__builtin_memset(&var_34, 0, 0x18)
int32_t edx
int32_t var_c = edx
int32_t* var_44 = &var_4
int32_t (* var_48)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41f9b4(0)
int32_t var_10 = 0
(*(*data_4b19b4 + 0x14))(ExceptionList, var_48, var_44)
int32_t* var_c_1 = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_4 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_4
int32_t* ExceptionList_3 = &var_4
int32_t (* var_1c)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t ecx =
    (*(*arg1 + 0x28))(ExceptionList_2, var_1c, ExceptionList_3, ExceptionList_4, var_10_1, var_c_1)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
int32_t* var_10_2

if (var_c_1 != 0)
    var_10_2 = var_c_1
    int32_t var_28
    int32_t ecx_4 = sub_41f9d8(arg1, &var_28, ecx)
    void* var_2c
    
    if ((var_10_2[7].b & 0x10) == 0)
        var_10_2[7].w |= 1
        var_10_2[7].w |= 2
        sub_41f9d8(arg1, &var_34, ecx_4)
        int32_t var_30
        sub_41f564(var_34, &var_30)
        (*(*var_10_2 + 0x18))(arg1)
    else
        sub_41f9d8(arg1, &var_2c, ecx_4)
else
    sub_41f9d8(arg1, &ExceptionList_2, ecx)
    int32_t eax_5
    int32_t edx_3
    eax_5, edx_3 = sub_419614(ExceptionList_2)
    edx_3.b = 1
    int32_t* eax_6
    int32_t ecx_2
    eax_6, ecx_2 = (*(eax_5 + 0x2c))(arg1)
    var_10_2 = eax_6
    sub_41f9d8(arg1, &ExceptionList_1, ecx_2)
    (*(*var_10_2 + 0x18))()

arg1[6] = var_10_2
char var_c_2 = 1
void* eax_20
int32_t edx_12
eax_20, edx_12 = sub_403b40(var_10_2)
edx_12.b = 1
int32_t eax_21
void* ebp_1
eax_21, ebp_1 = sub_419364(sub_4182b4+0x48, edx_12, eax_20, var_c_2)
*(*(ebp_1 - 4) + 0x84) = eax_21
void* var_10_3 = ebp_1
ExceptionList_4 = j_sub_40443c
ExceptionList_3 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_3
*(*(ebp_1 - 4) + 0x1c) = *(ebp_1 - 0xc)
void* eax_23
int32_t ecx_7
int32_t edx_15
eax_23, ecx_7, edx_15 = sub_406b68()
*(ebp_1 - 0x18) = *(eax_23 + 8)

if (*(ebp_1 - 0x18) == 0)
    edx_15.b = 1
    *(*(ebp_1 - 4) + 0x34) = sub_403c38(ecx_7, edx_15)
else
    *(*(ebp_1 - 4) + 0x34) = *(ebp_1 - 0x18)

void* var_1c_1 = ebp_1
ExceptionList_2 = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (sub_41a150(*(*(ebp_1 - 4) + 0x34), *(*(ebp_1 - 4) + 0x18)) s< 0)
    sub_419f9c(*(*(ebp_1 - 4) + 0x34), *(*(ebp_1 - 4) + 0x18))

*(*(ebp_1 - 4) + 0x28) = *(*(ebp_1 - 4) + 0x18)
void* eax_38 = *(*(ebp_1 - 4) + 0x18)
*(eax_38 + 0x1c) |= 1
void* eax_40 = *(*(ebp_1 - 4) + 0x18)
*(eax_40 + 0x1c) |= 2
*(ebp_1 - 4)
(*(**(*(ebp_1 - 4) + 0x18) + 0x14))()
void* eax_44 = *(*(ebp_1 - 4) + 0x18)
*(eax_44 + 0x1c) &= 0xfffd

if (*(ebp_1 - 0x18) == 0)
    int32_t ebx_3 = *(*(*(ebp_1 - 4) + 0x34) + 8) - 1
    
    if (ebx_3 s>= 0)
        int32_t i_1 = ebx_3 + 1
        *(ebp_1 - 0x10) = 0
        int32_t i
        
        do
            (*(*sub_41a0f4(*(*(ebp_1 - 4) + 0x34), *(ebp_1 - 0x10)) + 0xc))(arg1)
            *(ebp_1 - 0x10) += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_41f80d

if (*(ebp_1 - 0x18) == 0)
    sub_403c68(*(*(ebp_1 - 4) + 0x34))

void* result = *(ebp_1 - 4)
*(result + 0x34) = 0
return result
