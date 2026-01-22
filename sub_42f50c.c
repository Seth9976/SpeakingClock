// 函数: sub_42f50c
// 地址: 0x42f50c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x28) == 0)
    return 

int32_t var_26
sub_403578(&var_26, 0x16, 0)
void* ebx_1 = *(arg1 + 0x28)
var_26 = 0x9ac6cdd7
int16_t eax_1 = *(ebx_1 + 0x18)
int16_t var_18

var_18 = eax_1 != 0 ? eax_1 : 0x60

int32_t nDenominator = 0x9ec
int32_t ExceptionList_1 = *(ebx_1 + 0xc)
int16_t var_1c = MulDiv(ExceptionList_1, zx.d(var_18), nDenominator)
int32_t nDenominator_1 = 0x9ec
ExceptionList_1 = *(ebx_1 + 0x10)
int16_t var_1a = MulDiv(ExceptionList_1, zx.d(var_18), nDenominator_1)
int16_t var_12 = sub_42d898(&var_26)
HDC hdcRef = GetDC(nullptr)
int32_t __saved_ebp
int32_t* var_34_1 = &__saved_ebp
int32_t (* var_38_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t iMapMode = 8
uint8_t* ExceptionList = nullptr
uint32_t cbData16 = GetWinMetaFileBits(*(ebx_1 + 8), 0, ExceptionList, iMapMode, hdcRef)
uint8_t* pData16 = sub_402ea8(cbData16)
int32_t* var_40_1 = &__saved_ebp
int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (GetWinMetaFileBits(*(ebx_1 + 8), cbData16, pData16, 8, hdcRef) u< cbData16)
    sub_42ca98()

sub_41cad8(arg2, &var_26, 0x16)
sub_41cad8(arg2, pData16, cbData16)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_40_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) = sub_42f62e
sub_402ec4(pData16)
