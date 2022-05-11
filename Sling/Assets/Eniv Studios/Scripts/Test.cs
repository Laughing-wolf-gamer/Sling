using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace EnivStudios
{
    public class Test : MonoBehaviour
    {
        [Header("Bool")]
        [SerializeField] public bool test;
        [EnivInspector("test", false)][SerializeField] private int number = 2;

        [Header("String")]
        [SerializeField] public string myName = "Shubham";
        [EnivInspector(nameof(myName), false, "Shubham")][SerializeField][TextArea] string myDescription;

        [SerializeField] enum states {None,Bat,Rat}
        [Header("Enum")]
        [EnivInspector(nameof(myName), false, "Shubham")] [SerializeField] states animals;
        [EnivInspector(nameof(animals), false, states.Bat)] [SerializeField] [Range(1, 10)] private int batSpeed = 2;
        [EnivInspector(nameof(animals), false, states.Rat)][SerializeField] string batDescription = "Gets eaten by cat";

    }
    [CustomEditor(typeof(Test))]
    public class TestEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            ShowHeaderLogo(EditorGUIUtility.LoadRequired("Assets/Eniv Studios/Images/EditorImg 1.png") as Texture);
            EditorGUILayout.Space();
            GUILayout.Label("Write Heading Here", EditorStyles.boldLabel);

            EditorGUILayout.BeginVertical(EditorStyles.helpBox);
            EditorGUILayout.LabelField("You can write overview of your script here :)", guiMessageStyle);
            EditorGUILayout.EndVertical();
            EditorGUILayout.Space();

            EditorGUILayout.BeginVertical(EditorStyles.helpBox);

            DrawDefaultInspector();

            EditorGUILayout.EndVertical();
            EditorGUILayout.Space();

        }
        void ShowHeaderLogo(Texture tex)
        {
            var rect = GUILayoutUtility.GetRect(0f, 0f);
            rect.width = tex.width;
            rect.height = tex.height;
            GUILayout.Space(rect.height);
            GUI.DrawTexture(rect, tex);

            var e = Event.current;
            if (e.type != EventType.MouseUp) { return; }
            if (!rect.Contains(e.mousePosition)) { return; }
        }
        GUIStyle guiMessageStyle
        {
            get
            {
                var messageStyle = new GUIStyle(GUI.skin.label);
                messageStyle.wordWrap = true;
                return messageStyle;
            }
        }
    }
}
