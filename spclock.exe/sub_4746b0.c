// 函数: sub_4746b0
// 地址: 0x4746b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_19c = ebx
char var_5 = 0

if (data_4b1ce0 != 0)
    var_5 = *(data_4b1ce0 + 0x88)

int32_t* var_1a0 = &var_4
int32_t (* var_1a4)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_4b1ce0 != 0)
    sub_47755c(data_4b1ce0, 0)

LOGFONTA var_41

if (SystemParametersInfoA(SPI_GETICONTITLELOGFONT, 0x3c, &var_41, 0) == 0)
    HGDIOBJ eax_6 = GetStockObject(SYSTEM_FONT)
    sub_42b52c(*(arg1 + 0x84), eax_6)
else
    HFONT eax_4 = CreateFontIndirectA(&var_41)
    sub_42b52c(*(arg1 + 0x84), eax_4)

int32_t pvParam = 0x154

if (SystemParametersInfoA(SPI_GETNONCLIENTMETRICS, 0, &pvParam, 0) == 0)
    sub_42b618(*(arg1 + 0x80), 8)
    HGDIOBJ eax_14 = GetStockObject(SYSTEM_FONT)
    sub_42b52c(*(arg1 + 0x88), eax_14)
else
    LOGFONTA lplf_1[0x2]
    HFONT eax_9 = CreateFontIndirectA(&lplf_1)
    sub_42b52c(*(arg1 + 0x80), eax_9)
    LOGFONTA lplf
    HFONT eax_11 = CreateFontIndirectA(&lplf)
    sub_42b52c(*(arg1 + 0x88), eax_11)

sub_42b2b0(*(arg1 + 0x80), 0xff000017)
sub_42b2b0(*(arg1 + 0x88), 0xff000007)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1a0_1)(int32_t* arg1 @ ebp) = sub_4747fe

if (data_4b1ce0 == 0)
    return 0

return sub_47755c(data_4b1ce0, var_5)
