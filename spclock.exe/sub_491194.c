// 函数: sub_491194
// 地址: 0x491194
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t* esp_1 = &var_20
void* var_18 = nullptr
void* var_1c = nullptr
int32_t var_8 = 0

if (arg2.b != 0)
    void var_30
    esp_1 = &var_30
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

char var_d = arg2.b
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
void* esp_4 = esp_1 - 0xc
fsbase->NtTib.ExceptionList = esp_4
sub_423334(arg1, 0, nullptr)
arg1[0xf].b = 0x36
arg1[0x1c].b = 0
arg1[0x1d] = 0
arg1[0x19].b = 2
arg1[0x1b] = 0xffffffff
arg1[0x26] = 0
arg1[0x27] = 0
sub_491094(arg1, nullptr)
*(arg1 + 0xc1) = 1
arg1[0x14].b = 3
arg1[0x17] = 0x1fffffff
arg1[0x29] = 0
sub_404bdc(&arg1[0xc], "#tdl")
arg1[0x2b].b = 0
int32_t edx

if ((arg1[7].b & 0x10) == 0 && *data_4abfa4 == 0)
    sub_4032cc(0, &var_1c)
    sub_408cbc(var_1c, &var_18)
    sub_409b1c(var_18, &var_8)
    *(esp_4 - 4) = sub_490140(var_8)
    *(esp_4 - 8) = 0
    *(esp_4 - 0xc) = 0
    int32_t eax_21
    eax_21, edx = sub_406e6c()
    arg1[0x2a] = eax_21
    
    if (eax_21 != 0)
        enum WIN32_ERROR eax_23
        eax_23, edx = GetLastError()
        
        if (eax_23 == ERROR_ALREADY_EXISTS)
            arg1[0x2b].b = 1

*(esp_4 - 4) = 0x32
edx.b = 1
arg1[0x18] = sub_4916e8(0, edx, &data_490e08)
arg1[0x11].b = 1
arg1[0x10] = sub_48c210(&data_48bc38, 1)
*(esp_4 - 4) = &arg1[0x24]
QueryPerformanceFrequency()
int32_t edx_6
edx_6.b = 1
int32_t* eax_31 = sub_430618(sub_42a104+0x140, edx_6)
*(esp_4 - 4) = &var_4
*(esp_4 - 8) = j_sub_40443c
*(esp_4 - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_4 - 0xc
*(esp_4 - 0x10) = 0x7ff7
*(esp_4 - 0x14) = 0
sub_4319c4(eax_31, LoadBitmapA())
int32_t eax_35 = (*(*eax_31 + 0x2c))()

if (eax_35 s< 0)
    eax_35 += 3

arg1[0x2f] = eax_35 s>> 2
arg1[0x2e] = divs.dp.d(sx.q((*(*eax_31 + 0x20))()), 3)
*(esp_4 + 0x2c)
fsbase->NtTib.ExceptionList = *(esp_4 + 0x24)
*(esp_4 + 0x2c) = sub_491393
return sub_403c68(eax_31)
