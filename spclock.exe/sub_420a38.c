// 函数: sub_420a38
// 地址: 0x420a38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_140 = ebx
int32_t esi
int32_t var_144 = esi
int32_t var_13c = 0
int32_t var_130 = 0
int32_t var_134 = 0
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = nullptr
int32_t* var_148 = &var_4
int32_t (* var_14c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t ebx_1 = arg2[2]

if (ebx_1 != 0)
    ebx_1 = *(ebx_1 - 4)

char var_12c[0x103]
sub_403b48(*arg2, &var_12c)

if (ebx_1 + zx.d(var_12c[0]) + 9 s> *(arg1 + 0xc) - *(arg1 + 0x10))
    sub_420728(arg1)

int32_t var_10 = sub_42058c(arg1)
char var_29 = 0

if ((*(arg2 + 0x1d) & 2) == 0)
    if (*(arg1 + 0x20) != 0)
        var_29 = 1
else if (*(arg1 + 0x20) == 0 || (arg2[7].b & 0x20) == 0 || *(arg1 + 0x30) == 0)
    var_29 = 4
else
    var_29 = 1

void* ebx_7 = *(arg1 + 0x30)

if (ebx_7 != 0 && *(arg1 + 0x34) s< *(ebx_7 + 8))
    int32_t eax_22
    
    if (*(arg1 + 0x20) != 0)
        eax_22 = sub_41a0f4(*(arg1 + 0x30), *(arg1 + 0x34))
    
    if (*(arg1 + 0x20) == 0 || eax_22 != *(arg1 + 0x20))
        var_29 |= 2

int32_t ecx_1 = sub_421098(arg1, var_29, *(arg1 + 0x38))
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
int32_t ecx_4

if (*(arg1 + 0x50) == 0)
    ecx_4 = sub_4227e8(arg1, var_13c, sub_404dec(sub_403b48(*arg2, &var_12c), &var_12c))
else
    sub_404dec(ecx_1, sub_416064(sub_403ea8(sub_403b40(arg2))) + 0xa)
    int32_t var_154_1 = var_134
    void* const var_158_1 = &data_420e38
    sub_404dec(sub_403b48(*arg2, &var_12c), &var_12c)
    ExceptionList_1 = ExceptionList_3
    int32_t ecx_3 = sub_404f1c(&var_130, 3)
    ecx_4 = sub_4227e8(arg1, var_130, ecx_3)

sub_4227e8(arg1, arg2[2], ecx_4)
int32_t var_14 = sub_42058c(arg1)
void* eax_42 = *(arg1 + 0x30)

if (eax_42 != 0 && *(arg1 + 0x34) s< *(eax_42 + 8))
    if (*(arg1 + 0x20) != 0)
        *(arg1 + 0x34) += 1
    
    *(arg1 + 0x38) += 1

void* ebp_1 = sub_4210e0(arg1, arg2)
*(ebp_1 - 4)
int32_t ecx_7 = sub_421090()
*(ebp_1 - 0x14) = *(*(ebp_1 - 4) + 0x30)
*(ebp_1 - 0x18) = *(*(ebp_1 - 4) + 0x34)
*(ebp_1 - 0x1c) = *(*(ebp_1 - 4) + 0x38)
*(ebp_1 - 0x20) = *(*(ebp_1 - 4) + 0x18)
*(ebp_1 - 0x24) = *(*(ebp_1 - 4) + 0x28)
void* var_154_2 = ebp_1
int32_t (* var_158_2)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
*(*(ebp_1 - 4) + 0x30) = 0
*(*(ebp_1 - 4) + 0x34) = 0
*(*(ebp_1 - 4) + 0x38) = 0

if (*(*(ebp_1 - 4) + 0x24) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_154_3)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_420dc2
    *(*(ebp_1 - 4) + 0x30) = *(ebp_1 - 0x14)
    *(*(ebp_1 - 4) + 0x34) = *(ebp_1 - 0x18)
    *(*(ebp_1 - 4) + 0x38) = *(ebp_1 - 0x1c)
    *(*(ebp_1 - 4) + 0x18) = *(ebp_1 - 0x20)
    void* result = *(ebp_1 - 4)
    *(result + 0x28) = *(ebp_1 - 0x24)
    return result

void* var_160 = ebp_1
int32_t (* var_164)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx_8 = *(*(ebp_1 - 4) + 0x20)

if (ebx_8 != 0 && sub_403df4(ebx_8, &data_418674) != 0)
    int32_t* ebx_9 = *(*(ebp_1 - 4) + 0x20)
    
    if (sub_403df4(ebx_9, &data_418674) != 0 && (*(ebx_9 + 0x1d) & 2) != 0)
        *(*(ebp_1 - 4) + 0x28) = ebx_9
    
    *(*(ebp_1 - 4) + 0x30) = sub_403c38(ecx_7, 0x418601)
    int32_t var_16c_1 = *(ebp_1 - 4)
    int32_t (__convention("regparm")* var_170_1)(void* arg1) = sub_42052c
    esi.w = 0xfffd
    sub_403e64(*(*(ebp_1 - 4) + 0x20), esi, *(*(ebp_1 - 4) + 0x28))

if ((*(*(ebp_1 - 8) + 0x1d) & 2) != 0)
    *(*(ebp_1 - 4) + 0x18) = *(ebp_1 - 8)

int32_t var_16c_2 = *(ebp_1 - 4)
void* (__convention("regparm")* var_170_2)(void* arg1, int32_t* arg2) = sub_4208e4
esi.w = 0xfffd
sub_403e64(*(ebp_1 - 8), esi, *(*(ebp_1 - 4) + 0x18))
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_160_1 = 0x420d80
return sub_403c68(*(*(ebp_1 - 4) + 0x30))
