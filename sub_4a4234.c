// 函数: sub_4a4234
// 地址: 0x4a4234
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t i_2 = 0x19
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_2
    i_2 -= 1
while (i != 1)
*(esp_2 - 4) = i_2
int32_t entry_ebx
*(esp_2 - 8) = entry_ebx
*(esp_2 - 0xc) = arg2
*(esp_2 - 0x10) = arg3
*(esp_2 - 0x14) = &var_4
*(esp_2 - 0x18) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x1c
*(arg1 + 0x44a) = 0
*(arg1 + 0x44b) = 0
*(arg1 + 0x4fc) = 0
*(arg1 + 0x4fd) = 0
*(arg1 + 0x4fe) = 0
*(arg1 + 0x44d) = 0
*(arg1 + 0x504) = 0
*(arg1 + 0x4ff) = 0
*(arg1 + 0x500) = 1
*(arg1 + 0x44e) = 1
*(arg1 + 0x502) = 0
void* var_98
sub_4032cc(0, &var_98)
int64_t* var_94
sub_409ae8(var_98, &var_94)
sub_404bdc(&data_4b1df8, var_94)
*(esp_2 - 0x20) = "SpeakingClockLite"
*(esp_2 - 0x24) = 0
*(esp_2 - 0x28) = 0
sub_406e6c()
sub_4a40e4(arg1 + 0x43c, arg1 + 0x438)
int32_t var_18 = 0x64
*(esp_2 - 0x20) = &var_18
int64_t var_90[0xf]
*(esp_2 - 0x24) = &var_90
GetUserNameA()
void* var_9c
sub_404df8(&var_9c, &var_90, 0x64)
void var_8
void* ebp_1
int32_t edi
ebp_1, edi = sub_4a4174(var_9c, &var_8)
sub_404ea0(ebp_1 - 0x9c, *(ebp_1 - 4), "z&*%0 ")
sub_409d0c(ebp_1 - 0x8c, *(ebp_1 - 0x9c))
*(esp_2 - 0x20) = "STDDLG32WIN"
*(esp_2 - 0x24) = 0x64
*(esp_2 - 0x28) = 0
*(esp_2 - 0x2c) = 4
*(esp_2 - 0x30) = 0
*(esp_2 - 0x34) = 0xffffffff
data_4b1e1c = CreateFileMappingA()
*(esp_2 - 0x20) = 0
*(esp_2 - 0x24) = 0
*(esp_2 - 0x28) = 0
*(esp_2 - 0x2c) = 0xf001f
*(esp_2 - 0x30) = data_4b1e1c
data_4b1e20 = MapViewOfFile()
sub_403578(data_4b1e20, 0x64, 0)
sub_407960(data_4b1e20, ebp_1 - 0x8c)
*(esp_2 - 0x24) = fconvert.d(sub_40b044())
*(esp_2 - 0x28) = 0x4b1e02
sub_40ad1c(&data_4b1e00, &data_4b1dfe, &data_4b1dfc)

if (data_4b1dfc u< 0xc)
    *(*(ebp_1 - 0x10) + 0x442) = 0
else
    *(*(ebp_1 - 0x10) + 0x442) = 1

data_4b1e0c = 0
data_4b1e0e = 0
data_4b1e10 = 0
*(esp_2 - 0x24) = fconvert.d(sub_40b044())
sub_40affc(&data_4b1e08, 0x4b1e04)
*(esp_2 - 0x24) = fconvert.d(sub_40b044())
data_4b1e0a = sub_40b01c()
data_4b1e12 = 0
data_4b1e14 = 0
sub_4a835c(*(ebp_1 - 0x10))
*(ebp_1 - 0x10)
sub_4a7a00(arg2, edi)
sub_4a8510()
*(ebp_1 - 0x20) = fconvert.d(sub_40b044())
*esp_2 = *(ebp_1 - 0x1c)
*(esp_2 - 4) = *(ebp_1 - 0x20)
sub_40bc44(ebp_1 - 8, *data_4ac2ac)
*(ebp_1 - 0x28) = fconvert.d(sub_40b044())
*esp_2 = *(ebp_1 - 0x24)
*(esp_2 - 4) = *(ebp_1 - 0x28)
sub_40bc44(ebp_1 - 0xc, *data_4ac134)
*esp_2 = "Time: "
*(esp_2 - 4) = *(ebp_1 - 8)
*(esp_2 - 8) = "   Date: "
void* esp_39
*(esp_39 - 8) = *(ebp_1 - 0xc)
int64_t* ecx_4 = sub_404f1c(ebp_1 - 0xa0, 4)
void* esp_48 = esp_39 + 8
void* ebp_2 = sub_49f72c(*(*(ebp_1 - 0x10) + 0x3fc), *(ebp_1 - 0xa0), ecx_4)
sub_4032cc(0, ebp_2 - 0xa8)
sub_409ae8(*(ebp_2 - 0xa8), ebp_2 - 0xa4)
sub_404e54(ebp_2 - 0xa4, "voice")
char eax_39
int32_t ecx_5
int32_t edx_18
eax_39, ecx_5, edx_18 = sub_409894(*(ebp_2 - 0xa4))

if (eax_39 == 0)
    *(esp_48 - 4) = ebp_2
    *(esp_48 - 8) = j_sub_404188
    *(esp_48 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_48 - 0xc
    sub_404ea0(ebp_2 - 0xac, data_4b1df8, "voice")
    sub_403004(sub_4030a4(*(ebp_2 - 0xac)))
    sub_4a3570()
    ecx_5 = *(esp_48 - 4)
    fsbase->NtTib.ExceptionList = *(esp_48 - 0xc)
else if (*(*(ebp_2 - 0x10) + 0x4fe) != 0)
    ecx_5, edx_18 = sub_4a3570()

edx_18.b = 1
data_4b1e18 = sub_403c38(ecx_5, edx_18)
sub_41c738(data_4b1e18, 1)
void* ebp_3 = sub_4a3418()
int32_t eax_48
int32_t edx_22
eax_48, edx_22 = (*(*data_4b1e18 + 0x14))()

if (eax_48 - 1 s>= 0)
    *(ebp_3 - 0x18) = eax_48
    int32_t esi = 0
    int32_t i_1
    
    do
        *(ebp_3 - 0x10)
        edx_22.b = 1
        int32_t* eax_51 = sub_44b2b0(sub_449c4d+0x103, edx_22)
        (*(*data_4b1e18 + 0xc))()
        sub_44e2f4(eax_51, *(ebp_3 - 0xb0))
        sub_409340(sub_44ea60(eax_51, 1), ebp_3 - 0xb8)
        sub_404ea0(ebp_3 - 0xb4, 0x4a4960, *(ebp_3 - 0xb8))
        *(ebp_3 - 0xb4)
        (*(*eax_51 + 0x18))()
        eax_51[0x23] = *(ebp_3 - 0x10)
        eax_51[0x22] = sub_4a5abc
        int32_t edi_2 = *(*(*(ebp_3 - 0x10) + 0x3a4) + 0x34)
        sub_44e61c(edi_2, sub_44e490(edi_2), eax_51)
        *(*(ebp_3 - 0x10) + 0x364)
        int32_t edx_29
        edx_29.b = 1
        int32_t* eax_65 = sub_44b2b0(sub_449c4d+0x103, edx_29)
        (*(*data_4b1e18 + 0xc))()
        sub_44e2f4(eax_65, *(ebp_3 - 0xbc))
        sub_409340(sub_44ea60(eax_65, 1), ebp_3 - 0xc4)
        sub_404ea0(ebp_3 - 0xc0, 0x4a4960, *(ebp_3 - 0xc4))
        *(ebp_3 - 0xc0)
        (*(*eax_65 + 0x18))()
        eax_65[0x23] = *(ebp_3 - 0x10)
        eax_65[0x22] = sub_4a5abc
        sub_44e810(*(*(ebp_3 - 0x10) + 0x404), eax_65)
        esi += 1
        i_1 = *(ebp_3 - 0x18)
        *(ebp_3 - 0x18) -= 1
    while (i_1 != 1)

int32_t eax_76 = (*(*data_4b1e18 + 0x14))()
*(*(ebp_3 - 0x10) + 0x41c) = eax_76

if (eax_76 - 1 s< data_4b1e24)
    data_4b1e24 = 0

sub_44e368(sub_44e4a0(*(*(*(ebp_3 - 0x10) + 0x3a4) + 0x34), data_4b1e24), 1)
sub_44e368(sub_44e4a0(*(*(ebp_3 - 0x10) + 0x404), data_4b1e24), 1)
void* ebp_4 = sub_4a5b44(*(ebp_3 - 0x10))
sub_443098(*(*(ebp_4 - 0x10) + 0x360), 1)
*(*(ebp_4 - 0x10) + 0x3fc)
sub_49fc18()

if (*(*(ebp_4 - 0x10) + 0x503) != 0)
    sub_44e368(*(*(ebp_4 - 0x10) + 0x378), 1)
else
    sub_44e368(*(*(ebp_4 - 0x10) + 0x37c), 1)

sub_4a6af8(*(ebp_4 - 0x10))
sub_4a6fa4(*(ebp_4 - 0x10))
sub_47382c(data_4b1dec, *(*(ebp_4 - 0x10) + 0x450))
int32_t ecx_17
int32_t edx_45
ecx_17, edx_45 = sub_473840(data_4b1dec, *(*(ebp_4 - 0x10) + 0x424))

if (*(*(ebp_4 - 0x10) + 0x444) != 0)
    edx_45.b = 3
    ecx_17 = sub_46f7f4(*(ebp_4 - 0x10), edx_45)

*data_4ac2fc
sub_47754c(ecx_17, ebp_4 - 0xcc)
sub_409ae8(*(ebp_4 - 0xcc), ebp_4 - 0xc8)
sub_404ea0(*data_4ac2fc + 0x50, *(ebp_4 - 0xc8), sub_4a4967+5)

if (*(*(ebp_4 - 0x10) + 0x44c) == 0)
    *(*(ebp_4 - 0x10) + 0x44d) = 1

*(esp_48 + 8)
fsbase->NtTib.ExceptionList = *esp_48
*(esp_48 + 8) = sub_4a48ae
sub_404bac(ebp_4 - 0xcc, 0x10)
return sub_404bac(ebp_4 - 0xc, 3)
