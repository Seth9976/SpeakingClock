// 函数: sub_445ae0
// 地址: 0x445ae0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int64_t* var_c = nullptr
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1 = *(arg1 + 8)
sub_404bdc(*(arg1 + 4) + 0x34, *(ebx_1 + 0x7c))
sub_447b50(*(arg1 + 4), *(ebx_1 + 0x74))
sub_446894(ebx_1, &var_c)
sub_447b70(*(arg1 + 4), var_c)
int32_t eax_6 = sub_4468f0(ebx_1)
void* edi_1 = *(arg1 + 4)
*(edi_1 + 0x50) = eax_6
sub_404bdc(edi_1 + 0x6c, *(ebx_1 + 0x78))

if (*(ebx_1 + 0xaa) != 0)
    void* eax_8 = *(arg1 + 4)
    *(eax_8 + 0x7c) = arg1
    *(eax_8 + 0x78) = sub_445c5c

if (*(ebx_1 + 0x9a) != 0)
    void* eax_9 = *(arg1 + 4)
    *(eax_9 + 0x84) = arg1
    *(eax_9 + 0x80) = sub_445ce8

if (*(ebx_1 + 0x92) != 0)
    void* eax_10 = *(arg1 + 4)
    *(eax_10 + 0x9c) = arg1
    *(eax_10 + 0x98) = sub_445d4c

if (*(ebx_1 + 0xa2) != 0)
    void* eax_11 = *(arg1 + 4)
    *(eax_11 + 0xac) = arg1
    *(eax_11 + 0xa8) = sub_445dc8

if ((*(ebx_1 + 0x65) & 8) != 0)
    void* eax_12 = *(arg1 + 4)
    *(eax_12 + 0xa4) = arg1
    *(eax_12 + 0xa0) = sub_445c58

void* ebp_1 = sub_44590c(arg1)
sub_445a88(arg1)
*(ebp_1 - 4)

if ((*(**(arg1 + 4) + 0x3c))() != 0)
    sub_447784(*(arg1 + 4), ebp_1 - 0xc)
    sub_404bdc(*(arg1 + 8) + 0x80, *(ebp_1 - 0xc))
    sub_4478b8(*(arg1 + 4))
    (*(**(*(arg1 + 8) + 0x84) + 8))(arg2)
    *(*(arg1 + 8) + 0x6c) = *(*(arg1 + 4) + 0x50)

fsbase->NtTib.ExceptionList = arg2
__return_addr = sub_445c4f
return sub_404bac(ebp_1 - 0xc, 2)
