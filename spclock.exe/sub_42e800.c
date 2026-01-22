// 函数: sub_42e800
// 地址: 0x42e800
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_50 = ebx
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
char* var_4c = nullptr
int32_t* var_5c = &var_4
int32_t (* var_60)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg2 + 0xc))(ExceptionList, var_60, var_5c)
char var_48
sub_404dec((*(*arg2 + 0xc))(), &var_48)
char** eax_3
void* ebp_1
eax_3, ebp_1 = sub_42e2f8(data_4aaefc, var_4c)
*(ebp_1 - 4) = 0

if (eax_3 != 0)
    int32_t edx_2
    edx_2.b = 1
    *(ebp_1 - 4) = eax_3[0x12]()
    int32_t (* var_10_1)() = j_sub_404188
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    (*(**(ebp_1 - 4) + 0x30))(ExceptionList_1, var_10_1, ebp_1)
    fsbase->NtTib.ExceptionList = ExceptionList_1

sub_403c68(arg1[3])
arg1[3] = *(ebp_1 - 4)

if (*(ebp_1 - 4) != 0)
    void* eax_8 = *(ebp_1 - 4)
    *(eax_8 + 0x14) = arg1
    int32_t edx_5
    edx_5.w = 0xfffd
    *(eax_8 + 0x10) = sub_403e7c(arg1, edx_5)
    void* eax_12 = *(ebp_1 - 4)
    *(eax_12 + 0x1c) = arg1
    int32_t edx_6
    edx_6.w = 0xfffc
    *(eax_12 + 0x18) = sub_403e7c(arg1, edx_6)

int32_t* esi_1
esi_1.w = 0xfffd
sub_403e64(arg1, esi_1, arg1)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = &data_42e90d
sub_404b88(ebp_1 - 0x48)
return ebp_1 - 0x48
