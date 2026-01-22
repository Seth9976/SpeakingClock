// 函数: sub_4217d8
// 地址: 0x4217d8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_20 = arg1
int32_t var_14 = 0
int32_t* var_1c = nullptr
int32_t var_24 = 0
int32_t* var_18 = nullptr

if (arg5 != 0)
    arg4(&var_18, &var_24)

char var_d = sub_4211a8(var_14, var_1c, var_18)
int32_t* result
result.b = 1

if (arg2[1] != 0)
    if (arg2[2] != 0)
    label_42188a:
        long double x87_r1
        long double x87_r3
        
        switch (zx.d(***arg2))
            case 1, 2, 3, 6, 9
                result = sub_4211d8(&var_4)
            case 4
                result = sub_421230(x87_r1, x87_r3, &var_4)
            case 5, 0xa, 0xb
                result = sub_4212e4(&var_4)
            case 7
                result = sub_42140c(&var_4)
            case 8
                int32_t* result_1
                result_1, ebp_1 = sub_4216a0(&var_4)
                result = result_1
            case 0xc
                int32_t* result_2
                result_2, ebp_1 = sub_421740(&var_4)
                result = result_2
            case 0xf
                result = sub_421558(&var_4)
            case 0x10
                result = sub_42128c(&var_4)
    else if (***arg2 == 7 && sub_403df4(sub_4162ec(arg3, arg2), &data_418674) != 0
            && (*(sub_4162ec(arg3, arg2) + 0x24) & 4) != 0)
        goto label_42188a

*ebp_1
return result
