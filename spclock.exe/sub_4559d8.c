// 函数: sub_4559d8
// 地址: 0x4559d8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
char var_5 = arg1.b
int32_t* ebx = nullptr
char var_d = 0

if (data_4b1c68 == 0 || *(data_4b1c68 + 5) != 0)
    return 

int32_t* var_20 = &__saved_ebp
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
data_4b1c94 = data_4b1c68
int32_t* var_2c = &__saved_ebp
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
*(data_4b1c68 + 5) = 1
*(data_4b1c68 + 0x20) = var_5
data_4b1c68
int32_t ecx
sub_454858(ecx, data_4b1c70)

if (data_4b1c84 == 2)
    int32_t* eax_4 = data_4b1c68
    sub_403e18(eax_4, &data_4517f4)
    ebx = eax_4
    (*(*ebx + 0x34))()
    ebx[0x1d].b = ebx[2] == 0

char eax_10

if (*(data_4b1c68 + 8) != 0)
    eax_10 = sub_403df4(*(data_4b1c68 + 8), 0x4529a0)

if (*(data_4b1c68 + 8) == 0 || eax_10 == 0)
    void* eax_12 = data_4b1c68
    int32_t var_15_1 = *(eax_12 + 0x10)
    int32_t var_11_1 = *(eax_12 + 0x14)
else
    void* eax_11 = data_4b1c68
    int32_t var_15 = *(eax_11 + 0x18)
    int32_t var_11 = *(eax_11 + 0x1c)

int32_t eax_13
int32_t edx_7
eax_13, edx_7 = sub_455964(&__saved_ebp)

if (eax_13.b == 0)
    eax_13 = 0
else if (data_4b1c84 != 2 || ebx[0x1d].b == 0)
    if (data_4b1c84 == 0)
        eax_13 = 0
    else
        eax_13.b = 1
        eax_13, edx_7 = sub_45526c(eax_13)
        
        if (eax_13.b == 0 || var_5 == 0)
            eax_13 = 0
        else
            eax_13.b = 1
else if (var_5 != 0)
    eax_13.b = 1
else
    eax_13 = 0

if (data_4b1c84 != 2)
    if (data_4b1c88 == 0)
        SetCursor(data_4b1c7c)
    else
        sub_461930(data_4b1c88)
else if (eax_13.b != 0 && ebx[0x1d].b != 0)
    edx_7.b = 1
    int32_t* eax_15 = sub_46bf14(ebx[0x10])
    
    if (eax_15 != 0 && eax_15[0x9a] == ebx[0x10])
        ebp = sub_470d84(eax_15, nullptr)
    
    sub_458ac8(data_4b1c64, data_4b1c68)

data_4b1c64 = 0
data_4b1c68 = 0

if (data_4b1c94 == 0 || *(data_4b1c94 + 8) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    var_2c = sub_455c82
    sub_403c68(data_4b1c90)
    data_4b1c90 = 0
    
    if (data_4b1c94 != 0)
        *(data_4b1c94 + 5) = 0
        int32_t eax_25 = *(ebp - 0xd)
        ExceptionList_1 = zx.d(*(ebp - 9))
        *(data_4b1c94 + 8)
        *(ebp - 0x11)
        (**data_4b1c94)(ExceptionList_1, eax_25)
    
    data_4b1c68 = 0
    return 

void* eax_20
eax_20.b = 3

if (*(ebp - 9) == 0)
    eax_20.b = 4
    *(data_4b1c94 + 0x10) = 0
    *(data_4b1c94 + 0x14) = 0
    *(ebp - 0x11) = 0
    *(ebp - 0xd) = 0

ebp[-2] = data_4b1c94
int32_t* var_38_3 = ebp
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_455138(data_4b1c94, eax_20, *(data_4b1c94 + 0xc), data_4b1c94 + 0x10, *(data_4b1c94 + 8))
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_38_4 = 0x455c26

if (data_4b1c94 == 0)
    data_4b1c94 = ebp[-2]
