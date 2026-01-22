// 函数: sub_432900
// 地址: 0x432900
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t* var_110 = &var_4
int32_t (* var_114)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t nDenominator = 0x48
int32_t nNumerator = data_4b1a50
int32_t ExceptionList = 8
int32_t eax
int32_t edx
eax, edx = MulDiv(ExceptionList, nNumerator, nDenominator)
data_4aac44 = neg.d(eax)

if (*data_4ac4d0 == 1)
    char eax_3
    eax_3, edx = sub_4328bc()
    
    if (eax_3 == 0x80)
        sub_404c20(&var_8, "Tahoma")

edx.b = 1
int32_t* eax_5 = sub_428a78(sub_42891c+0xa8, edx)
int32_t* var_11c = &var_4
int32_t (* var_120_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_428b18(eax_5, 0x80000002)
char eax_8
void* ebp_1
eax_8, ebp_1 = sub_428ca4(eax_5, "SOFTWARE\Microsoft\Windows NT\CurrentVersion\FontSubstitutes")

if (eax_8 != 0)
    sub_42911c(*(ebp_1 - 8), sub_432a6b+5, ebp_1 - 4)
    sub_428ae8(*(ebp_1 - 8))

fsbase->NtTib.ExceptionList = ExceptionList
void* (* var_11c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4329c2
return sub_403c68(*(ebp_1 - 8))
