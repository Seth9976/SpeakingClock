// 函数: sub_422b50
// 地址: 0x422b50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* lpCriticalSection_3
void* lpCriticalSection_1 = lpCriticalSection_3
int32_t* lpCriticalSection_4 = &lpCriticalSection_1
int32_t ebx
int32_t var_1c = ebx
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = ExceptionList_3
int32_t edi
int32_t var_24 = edi
uint32_t ebx_1 = arg1
int32_t (* ExceptionList_1)(void* arg1, void* arg2)
int32_t* lpCriticalSection
char var_14

if (GetCurrentThreadId() != *data_4ac4d8)
    uint32_t lpCriticalSection_2
    int32_t edx_1
    lpCriticalSection_2, edx_1 = GetCurrentThreadId()
    lpCriticalSection = lpCriticalSection_2
    var_14 = 0
    int32_t** var_28_1 = &lpCriticalSection
    ExceptionList_1 = nullptr
    edx_1.b = 1
    int32_t eax_1
    eax_1, ebx_1, lpCriticalSection_4 =
        sub_40cfa8(0x4184d0, edx_1, data_4ac2f8, ExceptionList_1, var_28_1)
    sub_40451c(eax_1)

if (ebx_1 s<= 0)
    sub_422b04()
else
    sub_422b10(ebx_1)

lpCriticalSection_4[-3] = 0
EnterCriticalSection(&data_4b19d4)
ExceptionList_1 = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
lpCriticalSection_4[-3] = InterlockedExchange(&data_4aac00, lpCriticalSection_4[-3], ExceptionList, 
    ExceptionList_1, lpCriticalSection_4)
int32_t* lpCriticalSection_5 = lpCriticalSection_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
var_14.d = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &var_14
void* const eax_5

if (lpCriticalSection_4[-3] == 0 || *(lpCriticalSection_4[-3] + 8) s<= 0)
    eax_5 = nullptr
else
    eax_5.b = 1

*(lpCriticalSection_4 - 1) = eax_5.b

if (*(lpCriticalSection_4 - 1) == 0 || *(lpCriticalSection_4[-3] + 8) s<= 0)
    fsbase->NtTib.ExceptionList = var_14.d
    int32_t var_c = 0x422cfd
    return sub_403c68(lpCriticalSection_4[-3])

lpCriticalSection_4[-2] = sub_41a0f4(lpCriticalSection_4[-3], 0)
sub_419fe8(lpCriticalSection_4[-3], 0)
lpCriticalSection = &data_4b19d4
LeaveCriticalSection(lpCriticalSection)
lpCriticalSection = lpCriticalSection_4
int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t (* var_28_4)() = j_sub_404188
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void* ebx_2 = *lpCriticalSection_4[-2]
*(ebx_2 + 0xc)
(*(ebx_2 + 8))(ExceptionList_1, var_28_4, lpCriticalSection_4, ExceptionList_2, var_1c_1, 
    lpCriticalSection)
fsbase->NtTib.ExceptionList = var_14.d
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_422ca0
lpCriticalSection_1 = &data_4b19d4
return EnterCriticalSection(lpCriticalSection_1)
