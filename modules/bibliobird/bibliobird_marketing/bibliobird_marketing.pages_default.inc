<?php
/**
 * @file
 * bibliobird_marketing.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bibliobird_marketing_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Polish',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'pl' => 'pl',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'O Bibliobirdzie!';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<iframe style="float: right; margin-left: 5px;" width="427" height="240" src="https://www.youtube.com/embed/_zhNiHUSxLU" frameborder="0" allowfullscreen></iframe>

<div style="font-size: 22px">
<p>BiblioBird pomaga Ci czytać po angielsku!</p>

<ul>
<li><a href="/content">Znajdź</a> tekst do czytania</li>
<li>Kliknij na nieznane słowo, żeby dostać tłumaczenie na polski</li>
<li><a href="/wial">Powtarzaj</a> nieznane słowa w Anki</li>
</ul>
</div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Real Life in the USA',
      'body' => '<p><strong>"Real Life in the USA" (czyli "Prawdziwe życie w USA") to płatny pakiet tekstów dla Bibliobirda, przeznaczonych dla <em>średnio zaawansowanych</em> oraz <em>zaawansowanych uczniów</em> języka angielskiego.</strong></p>

<p>Podczas, gdy wszyscy na świecie znają amerykańskie filmy i programy telewizyjne, <em>reprezentowana w nich rzeczywistość nie jest w 100% prawdziwa!</em> Jednakże niestety właśnie tak większość obcokrajowców kształtuje swoje wyobrażenia o USA, Amerykanach oraz naszej kulturze.</p>

<p>"Real Life in the USA" zawiera pouczające artykuły, opowiadania, wywiady oraz rozmowy z native speakerami na wiele tematów dotyczących życia codziennego (<strong>dalej znajdziesz pełen spis treści!</strong>) i pokazuje, jakie jest prawdziwe życie w USA.</p>

<p><strong>Ucz się języka angielskiego odkrywając USA i kulturę Stanów Zjednoczonych oczami prawdziwych Amerykanów!</strong></p>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'site_updates-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'English',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About Bibliobird!';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<iframe style="float: right; margin-left: 5px;" width="427" height="240" src="https://www.youtube.com/embed/_zhNiHUSxLU" frameborder="0" allowfullscreen></iframe>

<div style="font-size: 22px">
<p>BiblioBird helps you read in a foreign language!</p>

<ul>
<li><a href="/content">Find</a> a text to read</li>
<li>Click on a word to see a translation in your native language</li>
<li><a href="/wial">Review</a> the words in Anki</li>
</ul>
</div>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['middle'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Real Life in the USA',
      'body' => '<p><strong>"Real Life in the USA" (czyli "Prawdziwe życie w USA") to płatny pakiet tekstów dla Bibliobirda, przeznaczonych dla <em>średnio zaawansowanych</em> oraz <em>zaawansowanych uczniów</em> języka angielskiego.</strong></p>

<p>Podczas, gdy wszyscy na świecie znają amerykańskie filmy i programy telewizyjne, <em>reprezentowana w nich rzeczywistość nie jest w 100% prawdziwa!</em> Jednakże niestety właśnie tak większość obcokrajowców kształtuje swoje wyobrażenia o USA, Amerykanach oraz naszej kulturze.</p>

<p>"Real Life in the USA" zawiera pouczające artykuły, opowiadania, wywiady oraz rozmowy z native speakerami na wiele tematów dotyczących życia codziennego (<strong>dalej znajdziesz pełen spis treści!</strong>) i pokazuje, jakie jest prawdziwe życie w USA.</p>

<p><strong>Ucz się języka angielskiego odkrywając USA i kulturę Stanów Zjednoczonych oczami prawdziwych Amerykanów!</strong></p>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['middle'][1] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'site_updates-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['middle'][2] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
