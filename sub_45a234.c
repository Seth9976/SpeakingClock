// 函数: sub_45a234
// 地址: 0x45a234
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi = arg1

if (*(arg2 + 0xc) != 0)
    return 

if ((edi[7].b & 0x10) != 0)
    (*(*edi - 0x10))()
    return 

int32_t eax_1 = *(arg2 + 8)
int32_t var_48 = sx.d(eax_1.w)
int32_t var_40

if (sub_418ab4(&var_48) == 0)
    sub_457310(edi, &var_48, &var_40)
    int32_t var_3c
    (*(*edi + 0x44))(var_40, var_3c)
    RECT lprc
    
    if (PtInRect(&lprc) != 0)
        goto label_45a2dd
    
    (*(*edi - 0x10))()
    return 

var_40 = var_48
int32_t var_3c_1 = sx.d(eax_1:2.w)
label_45a2dd:
char var_38 = 0
int32_t esi
esi.w = 0xffe6
sub_403e64(edi, esi, &var_40, &var_38)
*(arg2 + 0xc) = zx.d(var_38)

if (var_38 != 0)
    return 

esi.w = 0xffd6
arg1 = sub_403e64(edi, esi)

if (arg1 != 0 && *(arg1 + 0x61) != 0)
    sub_45733c(edi, edi)
    arg1[0x19] = edi
    
    if (sub_418ab4(&var_48) != 0)
        void var_18
        sub_418a3c(0, 0, &var_18)
        sub_457260(edi, &var_18, &var_48)
    
    (*(*arg1 + 0x40))()
    *(arg2 + 0xc) = 1

if (*(arg2 + 0xc) == 0)
    (*(*edi - 0x10))()
