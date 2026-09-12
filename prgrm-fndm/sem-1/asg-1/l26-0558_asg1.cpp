#include <iostream>

using namespace std;


int main()
{
  cout << endl << "========= Level 1 =========" << endl;
  {
    cout << endl << "- Mission 1 -" << endl;
    int n;

    int ttl_trsur = 0;
    float avg_trsur = 0;
    int hgh_trsur = 0;

    int n_scrp_chst = 0;
    int n_ord_chst = 0;
    int n_rare_chst = 0;
    int n_legnd_chst = 0;
    
    cout << "Enter no. of chests discovered: ";
    cin >> n;
    if (n == 0)
      cout << "No chests were added :(, good luck on ur next discovery ;-;";

    int i = 1;
    while (i <= n)
    {
        int tmp_chst_wrth;
        cout << "Enter chest #" << i << " 's treasure (worth): ";
        cin >> tmp_chst_wrth;

        if (tmp_chst_wrth >= 5000)
          n_legnd_chst += 1;
        else if (tmp_chst_wrth > 1000)
          n_rare_chst += 1;
        else if (tmp_chst_wrth > 100)
          n_ord_chst += 1;
        else
          n_scrp_chst += 1;

        if (tmp_chst_wrth > hgh_trsur)
          hgh_trsur = tmp_chst_wrth;

        ttl_trsur += tmp_chst_wrth;
        i++;
    }

    if (n!=0)
      avg_trsur = (float)ttl_trsur / n;

    cout << endl;
    cout << "Total Treasure: " << ttl_trsur << endl;
    cout << endl;
    
    cout << "Scrap chest: " << n_scrp_chst << endl;
    cout << "Ordinary chest: " << n_ord_chst << endl;
    cout << "Rare chest: " << n_rare_chst << endl;
    cout << "Legendary chest: " << n_legnd_chst << endl;

    cout << endl;
    cout << "Avg. value: " << avg_trsur << endl;
    cout << "Hgihest valued chest: " << hgh_trsur << endl;
  }

  {
    cout << endl << "- Mission 2 -" << endl;
    int n = 0;
    int ttl_wght = 0;
    int ttl_pure = 0;

    float avg_pure = 0;
    float hgh_pure = 0;

    int n_ord_crystl = 0;
    int n_valuable_crystl = 0;
    int n_legnd_crystl = 0;
    
    cout << "Enter no. of crystals discovered: ";
    cin >> n;
    if (n == 0)
      cout << "No crystals were added :(, good luck on ur next discovery ;-;";

    int i = 1;
    while (i <= n)
    {
        int wght;
        int pure;
        cout << "Enter Crystal #" << i << " 's weight and purity: ";
        cin >> wght >> pure;

        if (wght >= 100 && pure >= 95)
          n_legnd_crystl += 1;
        else if (wght >= 50 && pure >= 80)
          n_valuable_crystl += 1;
        else
          n_ord_crystl += 1;

        if (pure > hgh_pure)
          hgh_pure = pure;

        ttl_wght += wght;
        ttl_pure += pure;
        i++;
    }

    if (n!=0)
      avg_pure = (float)ttl_pure / n;

    cout << endl;
    cout << "Total Weight: " << ttl_wght << endl;
    cout << endl;
    
    cout << "Ordinary Crstals: " << n_ord_crystl << endl;
    cout << "Valueable Crystals: " << n_valuable_crystl << endl;
    cout << "Legendary Crystals: " << n_legnd_crystl << endl;

    cout << endl;
    cout << "Avg. purity: " << avg_pure << endl;
    cout << "Hgihest purity: " << hgh_pure << endl;

  }

  cout << endl << "========= Level 2 =========" << endl;
  {
    cout << endl << "- Mission 3 -" << endl << endl;

    int drgn_hp = 500;
    
    int atk_cnt = 0;
    int ttl_raw_dmg = 0;
    int ttl_actual_dmg = 0;

    // drgn icon in unicode(nerd_font) might appear as rnd gibberish
    cout << "A dragon appears rawr!   " << endl;

    int i = 1;
    
    while (drgn_hp > 0) {
      int raw_dmg;
      cout << "Enter atk dmg: " ;
      cin >> raw_dmg;

      ttl_raw_dmg += raw_dmg;

      int actual_dmg = 0;

      if (raw_dmg > 100)
        actual_dmg = raw_dmg - 20;
      else if (raw_dmg % 5 == 0)
        actual_dmg = raw_dmg * 2;
      else if (raw_dmg < 0)
        actual_dmg = -raw_dmg;
      else
        actual_dmg = raw_dmg;
        
      cout << "Attack " << i << "-> Raw=" << raw_dmg << " Actual=" << actual_dmg << endl;
      
      ttl_actual_dmg += actual_dmg;
      drgn_hp -= actual_dmg;
      i++;
    }

    cout << endl << "Drgn Slain!" << endl;

    cout << "Number of attacks: " << atk_cnt << endl;
    cout << "Total Raw Dmg: " << ttl_raw_dmg << endl;
    cout << "Total Actual Dmg: " << ttl_actual_dmg << endl;

    cout << "Final hp (dragon): " << drgn_hp << endl;

  }

  cout << endl << "========= Level 3 =========" << endl;

  {
    cout << endl << "- Mission 4 -" << endl;
    int n;
    cout << "Enter a +ve int: ";
    cin >> n;

    int dig_cnt = 0;
    int dig_sum = 0;
    int dig_prd = 1;
    int dig_lrg = 0;
    int dig_sml = 9;
    int dig_evn = 0;
    int dig_odd = 0;

    while (n / 10 != 0 || n != 0)
    {
      int t = n % 10;
      n = n / 10;
      
      dig_sum += t;
      dig_prd *= t;

      if (t > dig_lrg)
        dig_lrg = t;

      if (t < dig_sml)
        dig_sml = t;

      if (t % 2 == 0)
        dig_evn += 1;
      else
        dig_odd += 1;

      dig_cnt += 1;
    }

    cout << "Digits: " << dig_cnt << endl;
    cout << "Sum: " << dig_sum << endl;
    cout << "Product: " << dig_prd << endl;
    cout << "Largest Digit: " << dig_lrg << endl;
    cout << "Smallest Digit: " << dig_sml << endl;
    cout << "Even Digits: " << dig_evn << endl;
    cout << "Odd Digits: " << dig_odd << endl; 
  }

  {
    cout << endl << "- Misssion 5 -" << endl;
    
    unsigned int n, n_l = 0, n_l2 = 0, n_s = 1000000;

    cout << "Enter no. of +ve integers: ";
    cin >> n;

    int i = 0;

    while (i < n)
    {
      int t;
      cout << "Enter number #" << i << " : ";
      cin >> t;

      if (t > n_l)
      {
        n_l2 = n_l;
        n_l = t;
      }

      if (t < n_l && t > n_l2)
        n_l2 = t;

      if (t < n_s)
        n_s = t;

      i++;
      
    }

    cout << "Largest: " << n_l << endl;   
    cout << "2nd Largest: " << n_l2 << endl;   
    cout << "Smallest: " << n_s << endl;   
  }

  cout <<endl << "===== Level 4 ======" << endl;
  
  return 0;
}
