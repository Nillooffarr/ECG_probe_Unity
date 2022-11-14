using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkeletonButton : MonoBehaviour
{
    public GameObject Skeleton;
    public Material with_skeleton;
    public Material without_skeleton;
    public GameObject Body_high;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void whenButtonClicked()
    {
        if (Skeleton.activeInHierarchy == true)
        {
            Skeleton.SetActive(false);
            Body_high.GetComponent<MeshRenderer>().material = without_skeleton;
        }
        else
        {
            Skeleton.SetActive(true);
            Body_high.GetComponent<MeshRenderer>().material = with_skeleton;
        }
    }
}
